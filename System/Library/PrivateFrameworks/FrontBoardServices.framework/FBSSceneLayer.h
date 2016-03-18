/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol FBSSceneLayerDelegate;
@class FBSScene, CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {

	FBSScene* _scene;
	CAContext* _context;
	unsigned _identifier;
	double _level;
	long long _alignment;
	id<FBSSceneLayerDelegate> _delegate;
	BOOL _shouldObserveUpdates;

}

@property (assign,nonatomic) double level;                                    //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) FBSScene * scene;                                //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) id<FBSSceneLayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long alignment;                             //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) BOOL shouldObserveUpdates;                     //@synthesize shouldObserveUpdates=_shouldObserveUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isExternalSceneLayer;
-(BOOL)isCAContextLayer;
-(void)setAlignment:(long long)arg1 ;
-(void)setDelegate:(id<FBSSceneLayerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSSceneLayerDelegate>)delegate;
-(void)setLevel:(double)arg1 ;
-(double)level;
-(long long)alignment;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)_updateProperties;
-(id)_initWithLevel:(double)arg1 context:(id)arg2 ;
-(void)_setLevel:(double)arg1 fromObserver:(BOOL)arg2 ;
-(BOOL)shouldObserveUpdates;
-(FBSScene *)scene;
-(void)setScene:(FBSScene *)arg1 ;
-(void)_synchronize:(/*^block*/id)arg1 ;
@end

