#include <iostream>
using namespace std;

// Virtual classes
class CPU
{
public:
    virtual void calculate() = 0;
};
class GPU
{
public:
    virtual void display() = 0;
};
class Memory
{
public:
    virtual void storage() = 0;
};


// Intel Hardware
class IntelCPU : public CPU
{
public:
    void calculate()
    {
        cout << "Intel CPU calculating..." << endl;
    }
};
class IntelGPU : public GPU
{
public:
    void display()
    {
        cout << "Intel GPU displaying..." << endl;
    }
};
class IntelMemory : public Memory
{
public:
    void storage()
    {
        cout << "Intel Memory storing..." << endl;
    }
};

// Lenovo Hardware
class LenovoCPU : public CPU
{
public:
    void calculate()
    {
        cout << "Lenovo CPU calculating..." << endl;
    }
};
class LenovoGPU : public GPU
{
public:
    void display()
    {
        cout << "Lenovo GPU displaying..." << endl;
    }
};
class LenovoMemory : public Memory
{
public:
    void storage()
    {
        cout << "Lenovo Memory storing..." << endl;
    }
};


// Computer Class
class Computer
{
public:
    Computer(CPU *cpu, GPU* gpu, Memory* memory)
    {
        m_cpu = cpu;
        m_gpu = gpu;
        m_meomry = memory;
    }

    void work() 
    {
        m_cpu->calculate();
        m_gpu->display();
        m_meomry->storage();
    }

    ~Computer()
    {   
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }        
        if (m_gpu != NULL)
        {
            delete m_gpu;
            m_gpu = NULL;
        }        
        if (m_meomry != NULL)
        {
            delete m_meomry;
            m_meomry = NULL;
        }
        cout << "Computer detroyed"<< endl;
    }

private:
    CPU* m_cpu;
    GPU* m_gpu;
    Memory* m_meomry;
};

void test()
{
    Computer *cp = new Computer(new IntelCPU, new LenovoGPU, new LenovoMemory);
    cp->work();

    delete cp;
    cout << "Test finished." << endl;
}

int main()
{
    test();
    return 0;
}