/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICWeakObject : NSObject <NSCopying> {

	id _object;
	unsigned long long _cachedHash;

}

@property (nonatomic,__weak,readonly) id object;                         //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)cachedHash;
-(void)setCachedHash:(unsigned long long)arg1 ;
@end

