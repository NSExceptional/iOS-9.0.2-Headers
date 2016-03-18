/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoLeash/NanoLeash-Structs.h>
#import <UIKit/UIView.h>

@class NFMLeashManager, UIView, GraphView, UILabel;

@interface NFMHotterColderView : UIView {

	BOOL _freshBuffer;
	NFMLeashManager* _leashManager;
	long long _bufferIndex;
	long long _miniBufferIndex;
	UIView* _papaBar;
	UIView* _mamaBar;
	UIView* _babyBar;
	UIView* _graphClippingView;
	GraphView* _graph;
	UILabel* _rssiStats;

}

@property (nonatomic,retain) NFMLeashManager * leashManager;              //@synthesize leashManager=_leashManager - In the implementation block
@property (assign,nonatomic) long long bufferIndex;                       //@synthesize bufferIndex=_bufferIndex - In the implementation block
@property (assign,nonatomic) long long miniBufferIndex;                   //@synthesize miniBufferIndex=_miniBufferIndex - In the implementation block
@property (assign,nonatomic) BOOL freshBuffer;                            //@synthesize freshBuffer=_freshBuffer - In the implementation block
@property (nonatomic,retain) UIView * papaBar;                            //@synthesize papaBar=_papaBar - In the implementation block
@property (nonatomic,retain) UIView * mamaBar;                            //@synthesize mamaBar=_mamaBar - In the implementation block
@property (nonatomic,retain) UIView * babyBar;                            //@synthesize babyBar=_babyBar - In the implementation block
@property (nonatomic,retain) UIView * graphClippingView;                  //@synthesize graphClippingView=_graphClippingView - In the implementation block
@property (nonatomic,retain) GraphView * graph;                           //@synthesize graph=_graph - In the implementation block
@property (nonatomic,retain) UILabel * rssiStats;                         //@synthesize rssiStats=_rssiStats - In the implementation block
-(void)setBufferIndex:(long long)arg1 ;
-(long long)bufferIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(GraphView *)graph;
-(void)setGraph:(GraphView *)arg1 ;
-(long long)miniBufferIndex;
-(BOOL)freshBuffer;
-(UILabel *)rssiStats;
-(UIView *)papaBar;
-(UIView *)mamaBar;
-(UIView *)babyBar;
-(void)setFreshBuffer:(BOOL)arg1 ;
-(void)setMiniBufferIndex:(long long)arg1 ;
-(id)overrideService;
-(NFMLeashManager *)leashManager;
-(void)setLeashManager:(NFMLeashManager *)arg1 ;
-(void)setPapaBar:(UIView *)arg1 ;
-(void)setMamaBar:(UIView *)arg1 ;
-(void)setBabyBar:(UIView *)arg1 ;
-(UIView *)graphClippingView;
-(void)setGraphClippingView:(UIView *)arg1 ;
-(void)setRssiStats:(UILabel *)arg1 ;
@end

