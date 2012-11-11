// JitterBuffer.cpp : Defines the entry point for the console application.
//

// Interfaces
#include "Decoder.h"
#include "Renderer.h"
#include "IJitterBuffer.h"

// Mocks
#include "MockDecoder.h"
#include "MockRenderer.h"

// Class being tested
#include "JitterBuffer.h"

int main(int argc, char* argv[])
{
	IDecoder*  pDecoder          = new CMockDecoder();
	IRenderer* pRenderer         = new CMockRenderer();

	IJitterBuffer* pJitterBuffer = new CJitterBuffer(pDecoder, pRenderer);

	delete (pJitterBuffer);

	delete (pRenderer);
	delete (pDecoder);

	return 0;
}

