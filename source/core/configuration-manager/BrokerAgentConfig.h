#ifndef _BROKER_AGENT_CONFIG_H_
#define _BROKER_AGENT_CONFIG_H_

namespace fibp
{
struct BrokerAgentConfig
{
    size_t threadNum_;
    bool enableTest_;
    unsigned int port_;
};

}

#endif //  _BROKER_AGENT_CONFIG_H_
