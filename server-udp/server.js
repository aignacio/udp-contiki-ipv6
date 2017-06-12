'use strict';
let portIPv6 = 7878;
let hostIPv6 = 'aaaa::1';
let dgram = require('dgram');
let serverUDP = dgram.createSocket('udp6');
let disableLogs = false;

serverUDP.on('listening', function() {
    var address = serverUDP.address();
    console.log('[UDP - IPV6] Active IPv6 server addr.:' + address.address + ":" + address.port);
});

serverUDP.on('message', processMessage);

serverUDP.bind(portIPv6, hostIPv6);

function processMessage(message, remote) {
    if (!disableLogs)
        console.log('[UDP - IPv6] ' + new Date().toISOString() + ' ' + remote.address + ' Port:' + remote.port + ' - ' + message);
    let dataArray = message.toString().split('|');
}
