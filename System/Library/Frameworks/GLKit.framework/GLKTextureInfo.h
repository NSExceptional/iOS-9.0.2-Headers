/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GLKTextureInfo : NSObject <NSCopying> {

	unsigned name;
	unsigned target;
	unsigned width;
	unsigned height;
	int alphaState;
	int textureOrigin;
	BOOL containsMipmaps;

}

@property (readonly) unsigned name; 
@property (readonly) unsigned target; 
@property (readonly) unsigned width; 
@property (readonly) unsigned height; 
@property (readonly) int alphaState; 
@property (readonly) int textureOrigin; 
@property (readonly) BOOL containsMipmaps; 
-(int)alphaState;
-(int)textureOrigin;
-(BOOL)containsMipmaps;
-(id)initWithTexture:(id)arg1 textureName:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
@end

