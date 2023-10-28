#!/bin/bash

# Define the path to the .plg file
PLG_FILE="plugin/ipmi.plg"

# Extract the &name and &version from the .plg file
NAME=$(grep "<!ENTITY name" $PLG_FILE | cut -d'"' -f2)
VERSION=$(grep "<!ENTITY version" $PLG_FILE | cut -d'"' -f2)

# Set the archive name
ARCHIVE_NAME="${NAME}-${VERSION}-x86_64-1.txz"
ARCHIVE_PATH="archive/$ARCHIVE_NAME"

# Set the MD5 hash filename
MD5_NAME="${NAME}-${VERSION}-x86_64-1.md5"
MD5_PATH="archive/$MD5_NAME"

# Create the compressed archive
tar cJf $ARCHIVE_PATH source/ipmi

# Create MD5 hash file
md5sum $ARCHIVE_PATH > $MD5_PATH

# Commit to the repo
git add $ARCHIVE_PATH $MD5_PATH
git commit -m "Adding/updating $VERSION archive"
