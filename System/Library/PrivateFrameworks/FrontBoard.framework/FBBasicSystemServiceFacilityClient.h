/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSystemServiceFacilityClient.h>

@protocol FBSystemServiceClient;
@class NSString;

@interface FBBasicSystemServiceFacilityClient : NSObject <FBSystemServiceFacilityClient> {

	id<FBSystemServiceClient> _systemServiceClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBSystemServiceClient> systemServiceClient;              //@synthesize systemServiceClient=_systemServiceClient - In the implementation block
+(id)facilityClientWithSystemServiceClient:(id)arg1 ;
-(id)initWithSystemServiceClient:(id)arg1 ;
-(id<FBSystemServiceClient>)systemServiceClient;
@end

