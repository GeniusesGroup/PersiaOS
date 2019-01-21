/* For license and copyright information please see LEGAL file in repository */

// Store & retrieve all persistent data here. Data will persistent even on reboot or failure!
// Just for services access not outer OS scope.

// Store public & private key of thing.
struct ThingPublicKey
{
    char PublicKey;
    char PrivateKey;
};