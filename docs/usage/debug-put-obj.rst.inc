.. _borg_debug-put-obj:

borg debug-put-obj
------------------
::

    usage: borg debug-put-obj [-h] [-v] [--debug] [--lock-wait N] [--show-version]
                              [--show-rc] [--no-files-cache] [--umask M]
                              [--remote-path PATH]
                              [REPOSITORY] PATH [PATH ...]
    
    put file(s) contents into the repository
    
    positional arguments:
      REPOSITORY            repository to use
      PATH                  file(s) to read and create object(s) from
    
    optional arguments:
      -h, --help            show this help message and exit
      -v, --verbose, --info
                            enable informative (verbose) output, work on log level
                            INFO
      --debug               enable debug output, work on log level DEBUG
      --lock-wait N         wait for the lock, but max. N seconds (default: 1).
      --show-version        show/log the borg version
      --show-rc             show/log the return code (rc)
      --no-files-cache      do not load/update the file metadata cache used to
                            detect unchanged files
      --umask M             set umask to M (local and remote, default: 0077)
      --remote-path PATH    set remote path to executable (default: "borg")
    
Description
~~~~~~~~~~~

This command puts objects into the repository.
