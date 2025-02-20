<?
require_once '/usr/local/emhttp/plugins/ipmi/include/ipmi_options.php';

$usage = <<<EOF

Usage: $prog [options]

  -c, --commit   commit
  -s, --sensors   sensors config
      --debug      turn on debugging
      --help         display this help and exit
      --version    output version information and exit


EOF;

$shortopts = 'cs';
$longopts = [
    'commit',
    'debug',
    'sensors',
    'help',
    'version'
];
$args = getopt($shortopts, $longopts);

if (array_key_exists('help', $args)) {
    echo $usage.PHP_EOL;
    exit(0);
}

if (array_key_exists('version', $args)) {
    echo 'IPMI Sensors Config: 1.0'.PHP_EOL;
    exit(0);
}

$arg_commit = (array_key_exists('c', $args) || array_key_exists('commit', $args));
$arg_sensors = (array_key_exists('s', $args) || array_key_exists('sensors', $args));

$cmd_sensors = ($arg_sensors || ($_POST['config'])) ? '-sensors' : '';

$config_file = "$plg_path/ipmi{$cmd_sensors}.config";
$cmd          = "/usr/sbin/ipmi{$cmd_sensors}-config --filename=$config_file ";
$commit     = array_key_exists('commit', $_POST);

// remove carriage returns
$config = (array_key_exists('ipmicfg', $_POST)) ? str_replace("\r", '', $_POST['ipmicfg']) : '';

// get previous config file contents
$config_old = (file_exists($config_file)) ? file_get_contents($config_file) : '';

if(($arg_commit) && (!empty($config_old))){
    $config = $config_old;
}

if($commit && !empty($config)){
    // save config file changes
    file_put_contents($config_file, $config);
    $cmd .= "--commit $netopts 2>&1";
    $return_var = NULL ;
    exec($cmd, $output, $return_var);
}else{
    $cmd .= "--checkout $netopts 2>/dev/null";
    $return_var=NULL ;
    exec($cmd, $output, $return_var);
    $return_var=NULL ;
}



if($return_var){

    // revert config file if there's an error with commit
    if(($commit) && !empty($config_old))
        file_put_contents($config_file, $config_old);

    $return = [
        'error' => $output,
        'success' => false];
}else{
    $return = [
        'config' => file_get_contents($config_file),
        'success' => true];
}
echo json_encode($return);
?>