# 0x0F-load_balancer

In this project, I continued to build up the configuration of the web server issued in project [0x0C](https://github.com/Yosef-S-A/alx-system_engineering-devops/tree/main/0x0C-web_server). Additional two serers were given to me to configure one server as webserver similar to the previous project and on the third to set up an HAproxy load balancer on to manage both web servers.

Tasks :clipboard:

:zero: Double the number of webservers

+ Shell script that install and configures Nginx on a server with custom HTTP response header.
  + The name of the custom HTTP header is X-Served-By
  + The value of the custom HTTP header is the hostname of the server Nginx is running on

:one: Install your load balancer

+ Install and configure HAproxy on a server
  + Configured HAproxy version 1.8
  + Roundrobin algorithm is used
  + Enables management via the init script

:two: Add a custom HTTP header with Puppet

+ A Puppet manifest that automates the task of creating a Nginx and a custom HTTP header response.
  + The name of the custom HTTP header is X-Served-By
  + The value of the custom HTTP header is the hostname