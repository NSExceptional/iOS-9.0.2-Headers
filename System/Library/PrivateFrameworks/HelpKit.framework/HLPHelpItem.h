/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface HLPHelpItem : NSObject <NSCopying> {

	HLPHelpItem* _parent;
	long long _level;
	NSURL* _iconURL;
	NSString* _name;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) HLPHelpItem * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) long long level;                          //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                            //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
-(id)debugDescription;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 ;
-(void)setIconURL:(NSURL *)arg1 ;
-(HLPHelpItem *)parent;
-(void)setParent:(HLPHelpItem *)arg1 ;
-(NSURL *)iconURL;
@end

