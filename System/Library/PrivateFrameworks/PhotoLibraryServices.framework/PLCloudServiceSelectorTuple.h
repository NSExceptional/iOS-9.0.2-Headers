/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLCloudService;

@interface PLCloudServiceSelectorTuple : NSObject {

	SEL selector;
	PLCloudService* instance;

}

@property (assign,nonatomic) SEL selector; 
@property (nonatomic,retain) PLCloudService * instance; 
-(void)dealloc;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(PLCloudService *)instance;
-(void)setInstance:(PLCloudService *)arg1 ;
@end

