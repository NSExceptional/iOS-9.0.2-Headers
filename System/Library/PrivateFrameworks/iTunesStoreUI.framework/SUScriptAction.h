/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying> {

	NSString* _actionType;

}

@property (copy) NSString * actionType; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)actionType;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributeKeys;
-(void)setActionType:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)performAction;
-(id)initWithActionType:(id)arg1 ;
@end

