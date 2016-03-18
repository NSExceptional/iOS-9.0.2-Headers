/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSZeroingWeakReference : NSObject {

	id _object;
	NSString* _debug;
	Class _objectClass;
	unsigned long long _objectAddress;

}

@property (nonatomic,readonly) id object; 
@property (assign,nonatomic) Class objectClass;                             //@synthesize objectClass=_objectClass - In the implementation block
@property (assign,nonatomic) unsigned long long objectAddress;              //@synthesize objectAddress=_objectAddress - In the implementation block
+(id)referenceWithObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)objectAddress;
-(void)setObjectClass:(Class)arg1 ;
-(void)setObjectAddress:(unsigned long long)arg1 ;
-(Class)objectClass;
@end

