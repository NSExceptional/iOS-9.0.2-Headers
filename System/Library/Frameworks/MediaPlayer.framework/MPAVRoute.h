/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MPAVRoute : NSObject {

	NSString* _routeName;
	BOOL _picked;
	NSDictionary* _avRouteDescription;
	MPAVRoute* _wirelessDisplayRoute;
	long long _displayRouteType;
	BOOL _requiresPassword;
	NSString* _routeUID;
	long long _routeType;
	long long _pickableRouteType;
	long long _routeSubtype;

}

@property (nonatomic,readonly) NSString * routeName; 
@property (nonatomic,readonly) NSString * routeUID;                           //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) long long routeType;                           //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) long long pickableRouteType;                   //@synthesize pickableRouteType=_pickableRouteType - In the implementation block
@property (nonatomic,readonly) long long routeSubtype;                        //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) MPAVRoute * wirelessDisplayRoute; 
@property (getter=isPicked,nonatomic,readonly) BOOL picked; 
@property (nonatomic,readonly) BOOL requiresPassword;                         //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) long long passwordType; 
@property (nonatomic,readonly) BOOL displayIsPicked; 
@property (nonatomic,readonly) long long displayRouteType; 
-(NSString *)routeName;
-(BOOL)displayIsPicked;
-(MPAVRoute *)wirelessDisplayRoute;
-(BOOL)isPicked;
-(long long)routeSubtype;
-(id)avRouteDescription;
-(long long)pickableRouteType;
-(NSString *)routeUID;
-(id)_initWithAVRouteDescription:(id)arg1 ;
-(void)setRouteName:(NSString *)arg1 ;
-(void)setWirelessDisplayRoute:(MPAVRoute *)arg1 ;
-(void)setPicked:(BOOL)arg1 ;
-(BOOL)requiresPassword;
-(long long)passwordType;
-(void)_routingControllerPickedRouteNotification:(id)arg1 ;
-(void)setAVRouteDescription:(id)arg1 ;
-(long long)displayRouteType;
-(void)setDisplayRouteType:(long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)routeType;
@end

