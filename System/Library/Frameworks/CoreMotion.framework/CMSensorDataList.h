/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_xpc_object;
@class CMSensorRecorderInternal, NSObject, CLSensorRecorderAccelMeta, NSMutableArray, NSArray;

@interface CMSensorDataList : NSObject <NSFastEnumeration> {

	CMSensorRecorderInternal* fProxy;
	NSObject*<OS_xpc_object> fDataBuffer;
	CLSensorRecorderAccelMeta* fCurrentBlock;
	unsigned long long fCurrentBlockIdentifier;
	unsigned long long fCurrentBlockDataIdentifier;
	double fCurrentBlockStartTime;
	unsigned long long fCurrentBlockTimestamp;
	char* fDataBufferPtr;
	unsigned long long fDataBufferLength;
	unsigned long long fCurrentIdentifier;
	unsigned long long fStartingIdentifier;
	unsigned long long fRetrievedDataBufferIdentifier;
	unsigned long long fBlockOffset;
	Unpacker fAccelUnpacker;
	NSMutableArray* fCachedAccel;
	NSArray* fMetaArray;

}
-(void)_updateCurrentBlockProperties;
-(BOOL)_updatePointers;
-(id)initFrom:(double)arg1 to:(double)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CM11*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)initWithIdentifier:(unsigned long long)arg1 ;
@end

