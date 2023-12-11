// Handler.h
#pragma once

class Handler {
public:
    virtual void handleRequest(int request) = 0;
    void setSuccessor(Handler* successor);
    
protected:
    Handler* successor;
};
