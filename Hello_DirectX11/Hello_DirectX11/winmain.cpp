#include "DXApp.h"

class TestApp : public DXApp{
public:
	TestApp(HINSTANCE hInstance);
	~TestApp();

	bool Init() override;
	void Update(float dt) override;
	void Render(float dt) override;
};

TestApp::TestApp(HINSTANCE hInstance) : DXApp(hInstance){
	
}

TestApp::~TestApp(){

}

bool TestApp::Init(){
	if (!DXApp::Init()){
		return false;
	}

	return true;
}

void TestApp::Update(float dt){

}

void TestApp::Render(float dt){
	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, DirectX::Colors::CornflowerBlue);//Clear background to blue

	m_pSwapChain->Present(0, 0);//Display background(From buffer)
}

int WINAPI WinMain(__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd){
	TestApp tApp(hInstance);

	if (!tApp.Init()){
		return 1;
	}
	return tApp.Run();
}