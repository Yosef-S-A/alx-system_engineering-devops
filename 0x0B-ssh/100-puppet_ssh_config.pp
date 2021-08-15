# configuring ssh_config using Puppet

file_line {'Append a line to /etc/ssh/ssh_config':
  path    => '/etc/ssh/ssh_config',
  line    => '    IdentityFile ~/.ssh/holberton',
  replace => true,
}

file_line {'Turn off passwd auth':
  path    => '/etc/ssh/ssh_config',
  line    => '    PasswordAuthentication no',
  replace => true,
}
