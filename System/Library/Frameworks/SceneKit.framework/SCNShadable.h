/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SCNProgram, NSDictionary;


@protocol SCNShadable <NSObject>
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@optional
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)setProgram:(id)arg1;
-(SCNProgram *)program;
-(NSDictionary *)shaderModifiers;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)setShaderModifiers:(id)arg1;

@end

