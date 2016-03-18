/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORoutePreloader.h>

@protocol GEORoutePreloadCamera;
@class GEOTileKeyList, NSMutableArray, NSMapTable, NSTimer;

@interface GEONavRoutePreloader : GEORoutePreloader {

	id<GEORoutePreloadCamera> _camera;
	GEOTileKeyList* _tilesLoadingOrLoaded;
	GEOTileKeyList* _tilesReceived;
	GEOTileKeyList* _tilesMissed;
	NSMutableArray* _steps;
	unsigned _stepGeneration;
	BOOL _tooFarFromRoute;
	long long _currentLoadingSteps;
	NSMapTable* _stepErrors;
	NSMapTable* _stepLifetimeErrors;
	BOOL _anyErrors;
	BOOL _finished;
	double _beginTime;
	double _mostRecentErrorTime;
	BOOL _hadEnoughTilesToDisableNetworking;
	NSTimer* _geodCrashTimer;
	double _maneuverSizeInMeters;

}

@property (nonatomic,retain) id<GEORoutePreloadCamera> camera;              //@synthesize camera=_camera - In the implementation block
-(void)dealloc;
-(void)stopLoading;
-(BOOL)isSufficientlyLoaded;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(void)setTraits:(id)arg1 ;
-(void)preloaderLog:(id)arg1 ;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE16*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3 ;
-(void)setNetworkQuality:(unsigned long long)arg1 ;
-(int)preloadStateForTile:(const GEOTileKey*)arg1 ;
-(void)beginLoading;
-(void)_cancelPreloadTasks;
-(BOOL)loggingEnabled;
-(BOOL)fullDebuggingEnabled;
-(BOOL)minimalDebuggingEnabled;
-(id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(/*^block*/id)arg5 ;
-(void)_geodCrashed:(id)arg1 ;
-(void)_performNextRequests;
-(void)_accumulateSteps;
-(id)_descriptionForStep:(id)arg1 ;
-(BOOL)_loadStep:(id)arg1 requireWiFi:(BOOL)arg2 ;
-(void)_cancelStep:(id)arg1 ;
-(void)_evaluateNetworkPerformance:(id)arg1 ;
-(void)_cancelRequestsInPast;
-(void)_cancelAllSteps;
-(void)_incrementErrorForStep:(id)arg1 ;
-(void)_resetErrCounts;
-(void)setCamera:(id<GEORoutePreloadCamera>)arg1 ;
-(id<GEORoutePreloadCamera>)camera;
@end

