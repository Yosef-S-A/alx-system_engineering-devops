# puppet manifest that kills a process named killmenow

exec {'kill_a_process':
  command => 'killall killmenow',
  path => 'usr/bin',
  provider => 'shell',
}