#include<iostream>
#include<cstring>
#include<fstream>
#include<algorithm>
#include<queue>
#include<climits>
#include<stdio.h>
#include<unordered_map>
#include<unordered_set>
#include<unistd.h>//fork
#include<vector>//fork


using namespace std;

struct Input{
    vector<string> strs;
    unsigned int MIN;
    unsigned int MAX;
    bool ieiflag;
   int ielenflag;
};
vector<Input> inputs=
{
    //mm
    {
        {
            "Operator",
            "Defined",
            "Access",
            "Category",
            "Definitions"
        },
        3,
        9999,
        true,
        2
    },
    {
        {
            "SMS",
            "Indication"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Payload",
            "Container"
        },
        4,
        65538,
        true,
        2
    },
    {
        {
            "Payload",
            "Container",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Deregistration",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "PDU",
            "Session",
            "Identity2"
        },
        2,
        2,
        true,
        0
    },
    {
        {
            "5GMM",
            "Cause"
        },
       2,
        2,
        true,
        0
    },
    {
        {
            "GPRS",
            "Timer"
        },
        2,
        2,
        true,
        0
    },
    {
        {
            "GPRS",
            "Timer2"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "GPRS",
            "Timer3"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "PLMN",
            "List"
        },
        5,
        47,
        true,
        1
    },
    {
        {
            "PDU",
            "Session",
            "Status"
        },
        4,
        34,
        true,
        1
    },
    {
        {
            "PDU",
            "Session",
            "Reactivation",
            "Result"
        },
        4,
        34,
        1,
        1
    },
    {
        {
            "Extended",
            "Protocol",
            "Discriminator"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Security",
            "Header",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "PDU",
            "Session",
            "Identity"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Procedure",
            "Transaction",
            "Identity"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Message",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Authentication",
            "Failure",
            "Parameter"
        },
        16,
        16,
        true,
        1
    },
    {
        {
            "Authentication",
            "Parameter",
            "AUTN"
        },
        18,
        18,
        true,
        1
    },
    {
        {
            "Authentication",
            "Parameter",
            "RAND"
        },
        17,
        17,
        true,
        0
    },
    {
        {
            "Authentication",
            "Response",
            "Parameter"
        },
        6,
        18,
        true,
        1
    },
    {
        {
            "NAS",
            "Key",
            "Set",
            "Identifier"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "EAP",
            "Message"
        },
        10,
        1506,
        true,
        2
    },
    {
        {
            "ABBA"
        },
        6,
        6,
        true,
        1
    },
    {
        {
            "Configuration",
            "Update",
            "Indication"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Authentication",
            "Parameter",
            "RAND"
        },
        17,
        17,
        true,
        0
    },
    {
        {
            "5GS",
            "Mobile",
            "Identity"
        },
        4,
        9999,
        true,
        2
    },
    {
        {
            "Additional",
            "Information"
        },
        3,
        9999,
        true,
        1
    },
    {
        {
            "5GS",
            "Tracking",
            "Area",
            "Identity"
        },
        7,
        7,
        true,
        0
    },
    {
        {
            "5GS",
            "Tracking",
            "Area",
            "Identity",
            "List"
        },
        9,
        114,
        true,
        1
    },
    {
        {
            "NSSAI"
        },
        4,
        146,
        true,
        1
    },
    {
        {
            "Service",
            "Area",
            "List"
        },
        6,
        114,
        true,
        1
    },
    {
        {
            "Network",
            "Name"
        },
        3,
        9999,
        true,
        1
    },
    {
        {
            "Time",
            "Zone"
        },
        2,
        2,
        true,
        0
    },
    {
        {
            "Time",
            "Zone",
            "And",
            "Time"
        },
        8,
        8,
        true,
        0
    },
    {
        {
            "Daylight",
            "Saving",
            "Time"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "LADN",
            "Information"
        },
        3,
        1715,
        true,
        2
    },
    {
        {
            "MICO",
            "Indication"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Network",
            "Slicing",
            "Information"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Network",
            "Slicing",
            "Indication"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Rejected",
            "NSSAI"
        },
        4,
        42,
        true,
        1
    },
    {
        {
            "5GS",
            "Identity",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "5GS",
            "Registration",
            "Result"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "5GS",
            "Network",
            "Feature",
            "Support"
        },
        3,
        5,
        true,
        1
    },
    {
        {
            "PDU",
            "Session",
            "Reactivation",
            "Result"
        },
        4,
        34,
        true,
        1
    },
    {
        {
            "PDU",
            "Session",
            "Reactivation",
            "Result",
            "Error",
            "Cause"
        },
        5,
        515,
        true,
        2
    },
    {
        {
            "Emergency",
            "Number",
            "List"
        },
        5,
        50,
        true,
        1
    },
    {
        {
            "Extended",
            "Emergency",
            "Number",
            "List"
        },
        6,
        65538,
        true,
        2
    },
    {
        {
            "SOR",
            "Transparent",
            "Container"
        },
        20,
        2048,
        true,
        2
    },
    {
        {
            "NSSAI",
            "Inclusion",
            "Mode"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "5GSDRX",
            "Parameters"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "5GS",
            "Registration",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "5GMM",
            "Capability"
        },
        3,
        15,
        true,
        1
    },
    {
        {
            "NAS",
            "Message",
            "Container"
        },
        4,
        65535,
        true,
        2
    },
    {
        {
            "UE",
            "Security",
            "Capability"
        },
        4,
        10,
        true,
        1
    },
    {
        {
            "NAS",
            "Security",
            "Algorithms"
        },
        2,
        2,
        true,
        0
    },
    {
        {
            "S1",
            "UE",
            "Network",
            "Capability"
        },
        4,
        15,
        true,
        1
    },
    {
        {
            "IMEISV",
            "Request"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Uplink",
            "Data",
            "Status"
        },
        4,
        34,
        true,
        1
    },
    {
        {
            "UE",
            "Status"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "EPSNAS",
            "Security",
            "Algorithms"
        },
        2,
        2,
        true,
        0
    },
    {
        {
            "Allowed",
            "PDU",
            "Session",
            "Status"
        },
        4,
        34,
        true,
        1
    },
    {
        {
            "UES",
            "Usage",
            "Setting"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "Additional",
            "5G",
            "Security",
            "Information"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "EPSNAS",
            "Message",
            "Container"
        },
        3,
        65500,
        true,
        2
    },
    {
        {
            "LADN",
            "Information"
        },
        3,
        1715,
        true,
        2
    },
    {
        {
            "UE",
            "Network",
            "Capability"
        },
        4,
        15,
        true,
        1
    },
    {
        {
            "S1",
            "UE",
            "Security",
            "Capability"
        },
        4,
        7,
        true,
        1
    },
    {
        {
            "LADN",
            "Indication"
        },
        3,
        811,
        true,
        2
    },
    {
        {
            "5GS",
            "Update",
            "Type"
        },
        3,
        3,
        true,
        1
    },
    {
        {
            "Message",
            "Authentication",
            "Code"
        },
        4,
        4,
        false,
        0
    },
    {
        {
            "Sequence",
            "Number"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Plain",
            "5GSNAS",
            "Message"
        },
        0,
        65538,
        false,
        0
    },
    {
        {
            "Service",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Request",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "SNSSAI"
        },
        3,
        10,
        true,
        1
    },
    {
        {
            "DNN"
        },
        3,
        102,
        true,
        1
    },
    {
        {
            "_Access",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    //mm tail


    //sm head
    {
        {
            "_5GSM",
            "Capability"
        },
        3,
        15,
        true,
        1
    },
    {
        {
            "_5GSM",
            "Cause"
        },
        2,
        2,
        true,
        0
    },
    {
        {
            "Alwayson",
            "PDU",
            "Session",
            "Indication"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Alwayson",
            "PDU",
            "Session",
            "Requested"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Allowed",
            "SSC",
            "Mode"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "Extended",
            "Protocol",
            "Configuration",
            "Options"
        },
       4,
        65538,
        true,
        2
    },
    {
        {
            "Intergrity",
            "Protection",
            "Maximum",
            "Data",
            "Rate"
        },
        3,
        3,
        true,
        0
    },
    {
        {
            "Mapped",
            "EPS",
            "Bearer",
            "Contexts"
        },
        7,
        65538,
        true,
        2
    },
    {
        {
            "Maximum",
            "Number",
            "Of",
            "Supported",
            "Packet",
            "Filters"
        },
        3,
        3,
        true,
        false
    },
    {
        {
            "PDU",
            "Address"
        },
        7,
        15,
        true,
        1
    },
    {
        {
            "_PDU",
            "Session",
            "Type"
        },
        1,
        1,
        false,
        0
    },
    {
        {
            "QOS",
            "Flow",
            "Descriptions"
        },
        5,
        65538,
        true,
        2
    },
    {
        {
            "QOS",
            "Rules"
        },
        7,
        65538,
        true,
        2
    },
    {
        {
            "Session",
            "AMBR"
        },
        8,
        8,
        true,
        1
    },
    {
        {
            "SMPDUDN",
            "Request",
            "Container"
        },
        3,
        255,
        true,
        1
    },
    {
        {
            "SSC",
            "Mode"
        },
        1,
        1,
        false,
        0
    }

    //sm tail


};
