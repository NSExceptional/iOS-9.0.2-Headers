/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CSIndexJob : NSObject <NSSecureCoding, NSCopying> {

	long long _jobType;
	long long _jobOptions;
	NSArray* _identifiersToReindex;
	NSArray* _bundleIDs;
	NSArray* _excludedBundleIDs;

}

@property (assign,nonatomic) long long jobType;                           //@synthesize jobType=_jobType - In the implementation block
@property (assign,nonatomic) long long jobOptions;                        //@synthesize jobOptions=_jobOptions - In the implementation block
@property (nonatomic,retain) NSArray * identifiersToReindex;              //@synthesize identifiersToReindex=_identifiersToReindex - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                         //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * excludedBundleIDs;                 //@synthesize excludedBundleIDs=_excludedBundleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)jobOptions;
-(NSArray *)identifiersToReindex;
-(void)setJobOptions:(long long)arg1 ;
-(id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2 ;
-(NSArray *)excludedBundleIDs;
-(void)setIdentifiersToReindex:(NSArray *)arg1 ;
-(void)setExcludedBundleIDs:(NSArray *)arg1 ;
-(id)initWithJobType:(long long)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
@end

