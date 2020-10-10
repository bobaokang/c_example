#include <iostream>
#include "tinyxml2.h"
using namespace std;
using namespace tinyxml2;

int main()
{
    tinyxml2::XMLDocument doc;
	int ret=doc.LoadFile("test.xml");
	if(ret!=0)
	{
		cout<<"读取test.xml文件失败!"<<endl;
		return ret;
	}
	XMLElement* root=doc.RootElement();
	XMLElement *service=root->FirstChildElement("service");
	if(service)
	{
		XMLElement* test=service->FirstChildElement("test");
        cout<<"test:"<<test->GetText()<<endl;
	}
	else
	{
		cout<<"读取service配置失败!"<<endl;
		return -1;
	}
    return 0;
}
