/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSLogging.h>

@class NSString;

@interface _BSCategoryLogger : NSObject <BSLogging> {

	BOOL _enabled;
	NSString* _name;
	NSString* _category;

}

@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * category;                        //@synthesize category=_category - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)logWithFormat:(id)arg1 ;
-(void)logWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(id)initWithLoggerName:(id)arg1 category:(id)arg2 ;
@end

