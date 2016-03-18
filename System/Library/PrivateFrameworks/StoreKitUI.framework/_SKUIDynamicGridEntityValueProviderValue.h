/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKEntityValueProviding;
@interface _SKUIDynamicGridEntityValueProviderValue : NSObject {

	id<IKEntityValueProviding> _entityValueProvider;
	long long _sectionIndex;

}

@property (nonatomic,retain) id<IKEntityValueProviding> entityValueProvider;              //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                      //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(void)setSectionIndex:(long long)arg1 ;
-(long long)sectionIndex;
-(void)setEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
-(id<IKEntityValueProviding>)entityValueProvider;
@end

