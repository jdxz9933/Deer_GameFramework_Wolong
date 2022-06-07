﻿using Deer;
using UGFExtensions.SpriteCollection;
using UGFExtensions.Texture;
using UGFExtensions.Timer;
using UnityEngine;
using ProcedureOwner = GameFramework.Fsm.IFsm<GameFramework.Procedure.IProcedureManager>;
/// <summary>
/// 游戏入口。
/// </summary>
public partial class GameEntry
{
    /// <summary>
    /// 获取游戏设置组件
    /// </summary>
    public static GameSettingsComponent GameSettings => _gameSettings ??= UnityGameFramework.Runtime.GameEntry.GetComponent<GameSettingsComponent>();
    private static GameSettingsComponent _gameSettings;

    public static MessengerComponent Messenger => _messenger ??= UnityGameFramework.Runtime.GameEntry.GetComponent<MessengerComponent>();
    private static MessengerComponent _messenger;

    public static CameraComponent Camera => _camera ??= UnityGameFramework.Runtime.GameEntry.GetComponent<CameraComponent>();
    private static CameraComponent _camera;

    public static NetConnectorComponent NetConnector => _netConnector ??= UnityGameFramework.Runtime.GameEntry.GetComponent<NetConnectorComponent>();
    private static NetConnectorComponent _netConnector;

    public static ConfigComponent Config => _config ??= UnityGameFramework.Runtime.GameEntry.GetComponent<ConfigComponent>();
    private static ConfigComponent _config;

    public static MainThreadDispatcherComponent MainThreadDispatcher => _mainThreadDispatcher ??= UnityGameFramework.Runtime.GameEntry.GetComponent<MainThreadDispatcherComponent>();
    private static MainThreadDispatcherComponent _mainThreadDispatcher;

    public static TextureSetComponent TextureSet => _textureSet ??= UnityGameFramework.Runtime.GameEntry.GetComponent<TextureSetComponent>();
    private static TextureSetComponent _textureSet;

    public static SpriteCollectionComponent SpriteCollection => _spriteCollection ??= UnityGameFramework.Runtime.GameEntry.GetComponent<SpriteCollectionComponent>();
    private static SpriteCollectionComponent _spriteCollection;

    public static TimerComponent Timer => _timer ??= UnityGameFramework.Runtime.GameEntry.GetComponent<TimerComponent>();
    private static TimerComponent _timer;

    public static AssetObjectComponent AssetObject => _assetObject ??= UnityGameFramework.Runtime.GameEntry.GetComponent<AssetObjectComponent>();
    private static AssetObjectComponent _assetObject;


    private static void InitCustomDebuggers()
    {
        // 将来在这里注册自定义的调试器
        GMNetWindow netWindow = new GMNetWindow();
        Debugger.SetGMNetWindowHelper(netWindow);

        CustomSettingsWindow customSettingWindow = new CustomSettingsWindow();
        Debugger.SetCustomSettingWindowHelper(customSettingWindow);
    }
    /// <summary>
    /// 初始化组件一些设置
    /// </summary>
    private static void InitComponentsSet()
    {

    }
    /// <summary>
    /// 加载自定义组件
    /// </summary>
    private static void LoadCustomComponent() 
    {
        
    }

    public static void Entrance(object[] objects) 
    {
        // 初始化自定义调试器
        InitCustomDebuggers();
        InitComponentsSet();
        var procedureBase = (ProcedureBase)objects[0];
        ProcedureOwner procedureOwner = (ProcedureOwner)objects[1];
        //切换到下一流程
        procedureBase.ChangeStateByType(procedureOwner,typeof(ProcedureLogin));
    }
}