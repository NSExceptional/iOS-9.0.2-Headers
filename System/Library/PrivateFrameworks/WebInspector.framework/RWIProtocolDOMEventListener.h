/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) BOOL useCapture; 
@property (assign,nonatomic) BOOL isAttribute; 
@property (assign,nonatomic) int nodeId; 
@property (nonatomic,copy) NSString * handlerBody; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSString * sourceName; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * handler; 
-(BOOL)isAttribute;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(RWIProtocolDebuggerLocation *)location;
-(RWIProtocolRuntimeRemoteObject *)handler;
-(void)setHandler:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(void)setSourceName:(NSString *)arg1 ;
-(NSString *)sourceName;
-(void)setNodeId:(int)arg1 ;
-(int)nodeId;
-(void)setUseCapture:(BOOL)arg1 ;
-(void)setIsAttribute:(BOOL)arg1 ;
-(void)setHandlerBody:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 useCapture:(BOOL)arg2 isAttribute:(BOOL)arg3 nodeId:(int)arg4 handlerBody:(id)arg5 ;
-(BOOL)useCapture;
-(NSString *)handlerBody;
@end

