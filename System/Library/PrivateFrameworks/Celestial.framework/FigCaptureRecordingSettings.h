/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FigCaptureRecordingSettings : NSObject <NSCoding, NSCopying> {

	long long _settingsID;
	NSURL* _outputURL;
	NSString* _outputFileType;
	SCD_Struct_BW2 _maxDuration;
	long long _maxFileSize;
	long long _minFreeDiskSpaceLimit;

}

@property (assign,nonatomic) long long settingsID;                         //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                              //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,copy) NSString * outputFileType;                      //@synthesize outputFileType=_outputFileType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxDuration;                   //@synthesize maxDuration=_maxDuration - In the implementation block
@property (assign,nonatomic) long long maxFileSize;                        //@synthesize maxFileSize=_maxFileSize - In the implementation block
@property (assign,nonatomic) long long minFreeDiskSpaceLimit;              //@synthesize minFreeDiskSpaceLimit=_minFreeDiskSpaceLimit - In the implementation block
-(void)setSettingsID:(long long)arg1 ;
-(void)setMaxDuration:(SCD_Struct_BW2)arg1 ;
-(void)setMaxFileSize:(long long)arg1 ;
-(NSString *)outputFileType;
-(SCD_Struct_BW2)maxDuration;
-(long long)settingsID;
-(long long)minFreeDiskSpaceLimit;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(NSURL *)outputURL;
-(long long)maxFileSize;
@end

