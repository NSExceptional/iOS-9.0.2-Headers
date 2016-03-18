/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSourceEntity, NSString;

@interface HDSourceRevision : NSObject {

	HDSourceEntity* _sourceEntity;
	NSString* _sourceRevision;

}

@property (nonatomic,readonly) HDSourceEntity * sourceEntity;              //@synthesize sourceEntity=_sourceEntity - In the implementation block
@property (nonatomic,readonly) NSString * sourceRevision;                  //@synthesize sourceRevision=_sourceRevision - In the implementation block
-(HDSourceEntity *)sourceEntity;
-(NSString *)sourceRevision;
-(id)initWithSource:(id)arg1 sourceRevision:(id)arg2 ;
@end

