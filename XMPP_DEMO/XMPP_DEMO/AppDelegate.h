//
//  AppDelegate.h
//  XMPP_DEMO
//
//  Created by lei_dream on 16/3/3.
//  Copyright © 2016年 lei_dream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XMPP.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (readonly, nonatomic) XMPPStream *xmppStream; /**<  */


/**
 *  是否连接
 *
 *  @return 是否连接
 */
-(BOOL)connect;
/**
 *  断开连接
 */
-(void)disconnect;
/**
 *  设置xmppStream
 */
-(void)setupStream;

/**
 *  上线
 */
-(void)goOnline;

/**
 *  下线
 */
-(void)goOffline;
@end

