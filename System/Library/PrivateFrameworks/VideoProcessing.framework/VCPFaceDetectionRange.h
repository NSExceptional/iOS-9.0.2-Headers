/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPFaceDetectionRange : NSObject {

	unsigned long long _flags;
	unsigned long long _position;
	SCD_Struct_VC6 _start;
	SCD_Struct_VC6 _last;
	CGRect _bounds;

}

@property (assign) SCD_Struct_VC6 start;                     //@synthesize start=_start - In the implementation block
@property (assign) SCD_Struct_VC6 last;                      //@synthesize last=_last - In the implementation block
@property (assign) unsigned long long flags;                 //@synthesize flags=_flags - In the implementation block
@property (assign) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
@property (assign) unsigned long long position;              //@synthesize position=_position - In the implementation block
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(SCD_Struct_VC6)start;
-(void)setStart:(SCD_Struct_VC6)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(SCD_Struct_VC6)last;
-(void)setLast:(SCD_Struct_VC6)arg1 ;
@end

