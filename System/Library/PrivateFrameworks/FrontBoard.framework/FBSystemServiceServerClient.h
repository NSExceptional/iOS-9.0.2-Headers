/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBasicServerClient.h>
#import <libobjc.A.dylib/FBSystemServiceClient.h>

@protocol FBSystemServiceFacilityClient;
@class FBProcess, NSString;

@interface FBSystemServiceServerClient : BSBasicServerClient <FBSystemServiceClient> {

	BOOL _uiApp;
	NSString* _bundleID;
	BOOL _extension;
	NSString* _facilityID;
	id<FBSystemServiceFacilityClient> _facilityclient;
	NSString* _bundlePath;

}

@property (nonatomic,readonly) int pid; 
@property (nonatomic,retain,readonly) NSString * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,getter=isUIApp,nonatomic) BOOL UIApp;                                     //@synthesize uiApp=_uiApp - In the implementation block
@property (assign,getter=isExtension,nonatomic) BOOL extension;                             //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSString * bundlePath;                                         //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,retain) NSString * facilityID;                                         //@synthesize facilityID=_facilityID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) FBProcess * process; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,retain) id<FBSystemServiceFacilityClient> facilityClient;              //@synthesize facilityclient=_facilityclient - In the implementation block
-(NSString *)bundleID;
-(void)dealloc;
-(NSString *)description;
-(NSString *)bundlePath;
-(void)setExtension:(BOOL)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setUIApp:(BOOL)arg1 ;
-(BOOL)isUIApp;
-(FBProcess *)process;
-(NSString *)facilityID;
-(void)setFacilityID:(NSString *)arg1 ;
-(id<FBSystemServiceFacilityClient>)facilityClient;
-(void)setFacilityClient:(id<FBSystemServiceFacilityClient>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)isExtension;
-(int)pid;
@end

