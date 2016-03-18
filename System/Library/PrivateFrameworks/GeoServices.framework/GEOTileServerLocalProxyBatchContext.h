/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOTileKeyList, GEOTileRequester;

@interface GEOTileServerLocalProxyBatchContext : NSObject {

	GEOTileKeyList* _fullList;
	GEOTileKeyList* _interestList;
	GEOTileKeyList* _networkList;
	GEOTileKeyList* _pendingNetworkList;
	GEOTileRequester* _tileRequester;

}

@property (nonatomic,retain) GEOTileKeyList * fullList;                        //@synthesize fullList=_fullList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * interestList;                    //@synthesize interestList=_interestList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * networkList;                     //@synthesize networkList=_networkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * pendingNetworkList;              //@synthesize pendingNetworkList=_pendingNetworkList - In the implementation block
@property (nonatomic,retain) GEOTileRequester * tileRequester;                 //@synthesize tileRequester=_tileRequester - In the implementation block
-(void)dealloc;
-(void)setTileRequester:(GEOTileRequester *)arg1 ;
-(GEOTileKeyList *)fullList;
-(GEOTileKeyList *)networkList;
-(void)setFullList:(GEOTileKeyList *)arg1 ;
-(GEOTileRequester *)tileRequester;
-(void)setInterestList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)pendingNetworkList;
-(void)setNetworkList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)interestList;
-(void)setPendingNetworkList:(GEOTileKeyList *)arg1 ;
@end

