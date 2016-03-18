/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureStillImageSettings.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FigCaptureMovieFileRecordingSettings, NSURL, NSArray;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings <NSCoding, NSCopying> {

	int _movieMode;
	FigCaptureMovieFileRecordingSettings* _movieRecordingSettings;
	NSURL* _movieURLForEV0Image;
	NSArray* _movieLevelMetadataForEV0Image;

}

@property (assign,nonatomic) int movieMode;                                                            //@synthesize movieMode=_movieMode - In the implementation block
@property (nonatomic,copy) FigCaptureMovieFileRecordingSettings * movieRecordingSettings;              //@synthesize movieRecordingSettings=_movieRecordingSettings - In the implementation block
@property (nonatomic,copy) NSURL * movieURLForEV0Image;                                                //@synthesize movieURLForEV0Image=_movieURLForEV0Image - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadataForEV0Image;                                    //@synthesize movieLevelMetadataForEV0Image=_movieLevelMetadataForEV0Image - In the implementation block
-(void)setMovieMode:(int)arg1 ;
-(void)setMovieRecordingSettings:(FigCaptureMovieFileRecordingSettings *)arg1 ;
-(void)setMovieURLForEV0Image:(NSURL *)arg1 ;
-(void)setMovieLevelMetadataForEV0Image:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)movieMode;
-(FigCaptureMovieFileRecordingSettings *)movieRecordingSettings;
-(NSURL *)movieURLForEV0Image;
-(NSArray *)movieLevelMetadataForEV0Image;
@end

