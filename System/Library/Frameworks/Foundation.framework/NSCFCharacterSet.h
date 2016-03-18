/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface NSCFCharacterSet : NSMutableCharacterSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(Class)classForArchiver;
-(id)bitmapRepresentation;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(Class)classForKeyedArchiver;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowsWeakReference;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)retainWeakReference;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(id)invertedSet;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)finalize;
-(void)invert;
@end

