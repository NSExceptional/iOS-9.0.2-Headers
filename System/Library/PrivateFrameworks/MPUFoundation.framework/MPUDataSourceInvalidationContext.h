/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPUDataSourceInvalidationContext : NSObject {

	BOOL _invalidateEverything;
	BOOL _invalidateDataSourceCounts;

}

@property (nonatomic,readonly) BOOL invalidateEverything;                    //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
@property (nonatomic,readonly) BOOL invalidateDataSourceCounts;              //@synthesize invalidateDataSourceCounts=_invalidateDataSourceCounts - In the implementation block
-(BOOL)invalidateEverything;
-(BOOL)invalidateDataSourceCounts;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(void)setInvalidateDataSourceCounts:(BOOL)arg1 ;
@end

