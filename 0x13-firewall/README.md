# 0x13-firewall

## [0. Block all incoming traffic but]()

+ Install the ```ufw``` firewall and setup a few rules on a server.

  + Configure ufw so that it blocks all incoming traffic, except the following TCP ports:
    
    + 22 (SSH)

    + 443 (HTTP SSL)

    + 80 (HTTP)