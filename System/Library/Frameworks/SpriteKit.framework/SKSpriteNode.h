/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SKLightNode, SKTexture, UIColor, SKShader;

@interface SKSpriteNode : SKNode {

	SKCSpriteNode* _skcSpriteNode;
	SKLightNode* _light;
	BOOL _shouldRepeatTexture;

}

@property (nonatomic,retain) SKTexture * texture; 
@property (nonatomic,retain) SKTexture * normalTexture; 
@property (assign,nonatomic) unsigned lightingBitMask; 
@property (assign,nonatomic) unsigned shadowCastBitMask; 
@property (assign,nonatomic) unsigned shadowedBitMask; 
@property (assign,nonatomic) CGRect centerRect; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,retain) SKShader * shader; 
@property (assign,nonatomic) BOOL shouldRepeatTexture;                //@synthesize shouldRepeatTexture=_shouldRepeatTexture - In the implementation block
@property (assign,nonatomic) CGSize repeatTextureSize; 
+(id)spriteNodeWithTexture:(id)arg1 ;
+(id)spriteNodeWithImageNamed:(id)arg1 ;
+(id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(BOOL)arg2 ;
+(id)spriteNodeWithTexture:(id)arg1 size:(CGSize)arg2 ;
+(id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2 ;
+(id)spriteNodeWithColor:(id)arg1 size:(CGSize)arg2 ;
-(void)setNormalTexture:(SKTexture *)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setColorBlendFactor:(double)arg1 ;
-(id)initWithImageNamed:(id)arg1 ;
-(void)setShader:(SKShader *)arg1 ;
-(SKShader *)shader;
-(void)setLightingBitMask:(unsigned)arg1 ;
-(void)setShadowCastBitMask:(unsigned)arg1 ;
-(void)setShadowedBitMask:(unsigned)arg1 ;
-(id)initWithTexture:(id)arg1 color:(id)arg2 size:(CGSize)arg3 ;
-(id)initWithTexture:(id)arg1 ;
-(SKTexture *)normalTexture;
-(unsigned)lightingBitMask;
-(unsigned)shadowCastBitMask;
-(unsigned)shadowedBitMask;
-(double)colorBlendFactor;
-(id)initWithColor:(id)arg1 size:(CGSize)arg2 ;
-(CGRect)centerRect;
-(void)setCenterRect:(CGRect)arg1 ;
-(BOOL)repeatTexture;
-(void)setRepeatTexture:(BOOL)arg1 ;
-(CGSize)repeatTextureSize;
-(void)setRepeatTextureSize:(CGSize)arg1 ;
-(BOOL)shouldRepeatTexture;
-(void)setShouldRepeatTexture:(BOOL)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setBlendMode:(long long)arg1 ;
-(long long)blendMode;
-(SKTexture *)texture;
-(void)setTexture:(SKTexture *)arg1 ;
@end

