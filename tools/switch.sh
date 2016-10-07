# Swith between ipv4 & ipv6

main(){
    if [ "$1" = 'ipv4' ]; then
        echo "Switching VPN to: $1"
        ssh vsrv2 sh '~/vpn/ipv6-switch/switch4.sh'
    elif [  "$1" = 'ipv6' ]; then
        echo 'Switching VPN to:' "$1"
        ssh vsrv2 sh '~/vpn/ipv6-switch/switch6.sh'
    else
        echo 'Error: the option must be either ipv4 or ipv6!'
    fi
}

if [ "$#" -gt 1 ]; then
    echo 'Warning: more than one paramters received.'
fi
main "$@"
