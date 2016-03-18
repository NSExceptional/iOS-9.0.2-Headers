/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSUCustomFormatData;

@interface TSUCustomFormatCondition : NSObject <NSCopying> {

	int mConditionType;
	double mConditionValue;
	TSUCustomFormatData* mData;

}

@property (nonatomic,readonly) int conditionType; 
@property (nonatomic,readonly) double conditionValue; 
@property (nonatomic,readonly) TSUCustomFormatData * data; 
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSUCustomFormatData *)data;
-(int)conditionType;
-(double)conditionValue;
-(id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
@end

