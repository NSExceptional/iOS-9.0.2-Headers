/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPDCNEspressoMetalSingleton : NSObject {

	int _is_memory_tight;
	/*^block*/id _applicationKillBlock;

}

@property (assign) int is_memory_tight;                          //@synthesize is_memory_tight=_is_memory_tight - In the implementation block
@property (nonatomic,copy) id applicationKillBlock;              //@synthesize applicationKillBlock=_applicationKillBlock - In the implementation block
+(id)shared;
-(void)dealloc;
-(id)init;
-(void)setApplicationKillBlock:(id)arg1 ;
-(int)is_memory_tight;
-(void)setIs_memory_tight:(int)arg1 ;
-(id)applicationKillBlock;
@end

