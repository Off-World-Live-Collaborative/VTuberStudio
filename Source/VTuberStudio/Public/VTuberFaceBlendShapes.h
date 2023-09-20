#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VTuberFaceBlendShapes.generated.h"

USTRUCT(BlueprintType)
struct FVTuberFaceBlendShapes : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_browDownL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_browDownR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_browLateralL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_browLateralR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_browRaiseInL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_browRaiseInR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_browRaiseOuterL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_browRaiseOuterR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_earUpL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_earUpR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeBlinkL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeBlinkR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeCheekRaiseL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeCheekRaiseR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeFaceScrunchL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeFaceScrunchR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyelashesDownINL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyelashesDownINR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyelashesDownOUTL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyelashesDownOUTR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyelashesUpINL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyelashesUpINR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyelashesUpOUTL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyelashesUpOUTR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLidPressL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLidPressR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLookDownL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLookDownR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLookLeftL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLookLeftR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLookRightL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLookRightR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLookUpL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLookUpR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLowerLidDownL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLowerLidDownR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLowerLidUpL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeLowerLidUpR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeParallelLookDirection = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyePupilNarrowL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyePupilNarrowR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyePupilWideL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyePupilWideR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeRelaxL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeRelaxR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeSquintInnerL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeSquintInnerR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeUpperLidUpL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeUpperLidUpR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeWidenL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_eyeWidenR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTiltLeftD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTiltLeftM = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTiltLeftU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTiltRightD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTiltRightM = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTiltRightU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnDownD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnDownM = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnDownU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnLeftD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnLeftM = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnLeftU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnRightD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnRightM = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnRightU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnUpD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnUpM = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_headTurnUpU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawBack = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawChinCompressL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawChinCompressR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawChinRaiseDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawChinRaiseDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawChinRaiseUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawChinRaiseUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawClenchL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawClenchR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawFwd = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawLeft = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawOpen = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawOpenExtreme = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_jawRight = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_lookAtSwitch = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCheekBlowL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCheekBlowR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCheekSuckL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCheekSuckR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerDepressL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerDepressR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerDownL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerDownR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerNarrowL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerNarrowR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerPullL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerPullR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerRounderDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerRounderDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerRounderUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerRounderUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerSharpenDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerSharpenDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerSharpenUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerSharpenUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerUpL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerUpR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerWideL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthCornerWideR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthDimpleL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthDimpleR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthDown = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthFunnelDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthFunnelDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthFunnelUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthFunnelUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLeft = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsBlowL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsBlowR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPressL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPressR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPullDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPullDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPullUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPullUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPurseDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPurseDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPurseUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPurseUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPushDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPushDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPushUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsPushUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsStickyLPh1 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsStickyLPh2 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsStickyLPh3 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsStickyRPh1 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsStickyRPh3 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsStickyRPh2 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsThickDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsThickDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsThickUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsThickUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsThinDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsThinDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsThinUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsThinUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTightenDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTightenDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTightenUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTightenUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTogetherDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTogetherDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTogetherUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTogetherUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTowardsDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTowardsDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTowardsUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLipsTowardsUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipBiteL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipBiteR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipDepressL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipDepressR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipRollInL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipRollInR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipRollOutL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipRollOutR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipShiftLeft = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipShiftRight = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipTowardsTeethL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthLowerLipTowardsTeethR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthPressDL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthPressUL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthPressDR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthPressUR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthRight = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthSharpCornerPullL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthSharpCornerPullR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyDC = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyDINL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyDINR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyDOUTL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyDOUTR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyUC = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyUINL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyUINR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyUOUTL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStickyUOUTR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStretchL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStretchLipsCloseL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStretchLipsCloseR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthStretchR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUp = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipBiteL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipBiteR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipRaiseL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipRaiseR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipRollInL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipRollInR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipRollOutL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipRollOutR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipShiftLeft = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipShiftRight = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipTowardsTeethL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_mouthUpperLipTowardsTeethR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckDigastricDown = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckDigastricUp = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckMastoidContractL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckMastoidContractR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckStretchL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckStretchR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckSwallowPh1 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckSwallowPh2 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckSwallowPh3 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckSwallowPh4 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckThroatDown = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckThroatExhale = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckThroatInhale = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_neckThroatUp = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseNasolabialDeepenL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseNasolabialDeepenR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseNostrilCompressL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseNostrilCompressR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseNostrilDepressL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseNostrilDepressR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseNostrilDilateL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseNostrilDilateR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseWrinkleL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseWrinkleR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseWrinkleUpperL = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_noseWrinkleUpperR = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_skullUnified = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethBackD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethBackU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethDownD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethDownU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethFwdD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethFwdU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethLeftD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethLeftU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethRightD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethRightU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethUpD = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_teethUpU = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueDown = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueIn = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueLeft = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueNarrow = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueOut = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tonguePress = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueRight = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueRollDown = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueRollLeft = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueRollRight = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueRollUp = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueTipDown = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueTipLeft = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueTipRight = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueTipUp = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueUp = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_expressions_tongueWide = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTuberStudio", meta = (UIMin = "0", UIMax="10", ClampMin = "0", ClampMax = "10"))
	float CTRL_rigLogic_OffOn = 0;
};
