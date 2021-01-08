#include "Angle.h"
#include "Vector.h"
#include "PQX.h"

#using < mscorlib.dll>
using namespace System;
#pragma managed

namespace SmartRoadBridge
{
	namespace Alignment
	{
		System::Double CRadToDeg(System::Double rad)
		{
			return RadToDeg(rad);
		};

		System::Double CDegToRad(System::Double deg)
		{
			return DegToRad(deg);
		};

		public ref class CAngle
		{
		public:
			CAngle();
			CAngle(System::Double);
			~CAngle();

			System::Double Cos();

		private:
			Angle* theAnglePtr;
		};

	}; // namespace Alignment
};     // namespace SmartRoadBridge



SmartRoadBridge::Alignment::CAngle::CAngle()
{
	theAnglePtr = new Angle();
}

SmartRoadBridge::Alignment::CAngle::CAngle(System::Double rad)
{
	theAnglePtr = new Angle(rad);
}

SmartRoadBridge::Alignment::CAngle::~CAngle()
{
	delete theAnglePtr;
	theAnglePtr = NULL;
}

System::Double SmartRoadBridge::Alignment::CAngle::Cos()
{
	return theAnglePtr->Cos();
}
