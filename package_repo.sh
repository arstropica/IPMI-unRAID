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

# Create the compressed archive of the contents of source/ipmi
# We change to the directory and use * to tar all its contents without the directory itself
cd source/ipmi
tar cJf ../../$ARCHIVE_PATH *
cd ../..

# Create MD5 hash file
cd archive
md5sum $ARCHIVE_NAME > $MD5_NAME
cd ..

# Commit to the repo
git add $ARCHIVE_PATH $MD5_PATH
git commit -m "Adding/updating $VERSION archive"
