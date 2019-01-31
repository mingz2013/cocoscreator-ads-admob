//
//  NSObject+AdsPlugin.h
//  hello_world-mobile
//
//  Created by zhaojm on 2019/1/25.
//

#import <Foundation/Foundation.h>
#import "CallbackContext.h"
NS_ASSUME_NONNULL_BEGIN

@interface AdsPluginManager: NSObject

@property(nonatomic, strong) NSMutableDictionary *plugins;
@property(nonatomic, strong) UIViewController *viewController;

+ (instancetype)getInstance;


// iOS应用生命周期
- (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)applicationWillResignActive:(UIApplication *)application;
- (void)applicationDidEnterBackground:(UIApplication *)application;
- (void)applicationWillEnterForeground:(UIApplication *)application;
- (void)applicationWillTerminate:(UIApplication *)application;


- (void)initPlugins : (UIViewController*)viewController;


- (Boolean)exec : (NSString*) service : (NSString*) action : (NSDictionary*)args : (CallbackContext*)callbackContext;



@end

NS_ASSUME_NONNULL_END
