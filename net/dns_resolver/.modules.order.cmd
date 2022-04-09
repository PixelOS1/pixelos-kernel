cmd_net/dns_resolver/modules.order := {   echo net/dns_resolver/dns_resolver.ko; :; } | awk '!x[$$0]++' - > net/dns_resolver/modules.order
