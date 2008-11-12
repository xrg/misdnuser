#!/bin/bash

git-archive --format=tar --prefix=mISDNuser-1.1/ HEAD | gzip > mISDNuser-1.1.tgz
