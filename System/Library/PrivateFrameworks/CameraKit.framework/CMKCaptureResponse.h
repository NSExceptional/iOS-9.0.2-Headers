/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMKInflightAsset, NSMutableDictionary, NSDictionary, CMKCaptureRequest;

@interface CMKCaptureResponse : NSObject {

	BOOL _completed;
	long long _type;
	CMKInflightAsset* _asset;
	NSMutableDictionary* _metadata;
	NSDictionary* _additionalInformation;
	NSDictionary* _diagnostics;
	CMKCaptureRequest* _request;
	NSDictionary* __parameterStorage;

}

@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;                    //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) CMKInflightAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;                       //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalInformation;                   //@synthesize additionalInformation=_additionalInformation - In the implementation block
@property (nonatomic,copy) NSDictionary * diagnostics;                             //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,copy) CMKCaptureRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * _parameterStorage;              //@synthesize _parameterStorage=__parameterStorage - In the implementation block
-(id)init;
-(CMKCaptureRequest *)request;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(CMKInflightAsset *)asset;
-(void)setAsset:(CMKInflightAsset *)arg1 ;
-(NSDictionary *)diagnostics;
-(NSDictionary *)additionalInformation;
-(void)setAdditionalInformation:(NSDictionary *)arg1 ;
-(void)setDiagnostics:(NSDictionary *)arg1 ;
-(NSDictionary *)_parameterStorage;
-(id)parameterForKey:(id)arg1 ;
-(void)releaseCachedImages;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)setRequest:(CMKCaptureRequest *)arg1 ;
-(NSMutableDictionary *)metadata;
@end

