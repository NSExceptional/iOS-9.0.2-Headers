/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ML3Predicate : NSObject <NSCoding, NSCopying>
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
-(BOOL)isTrueAlways;
-(BOOL)isFalseAlways;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
@end

